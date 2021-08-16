precision mediump float;
varying vec2 textureCoordinate;
uniform sampler2D inputImageTexture;

// 图像笛卡尔坐标系的关键点，也就是纹理坐标乘以宽高得到
uniform float cartesianPoints[98*2];

// 美型程度参数列表
uniform float reshapeIntensity;

// 纹理宽度
uniform int textureWidth;
// 纹理高度
uniform int textureHeight;

// 是否允许腮红处理，存在人脸时为1，没有人脸时为0
uniform int enableReshape;

void main()
{
    vec2 coordinate = textureCoordinate.xy;
    vec4 sorce=texture2D(inputImageTexture, coordinate);
    // 将坐标转成图像大小，这里是为了方便计算
    if(enableReshape == 0){
        gl_FragColor = sorce;
        return;
    }
    
    coordinate = textureCoordinate * vec2(float(textureWidth), float(textureHeight));
    
    float x1=cartesianPoints[60*2];
    float x2=cartesianPoints[72*2];
    float y=cartesianPoints[54*2+1];
    
    vec2 leftEyeCenter=vec2(cartesianPoints[96*2],cartesianPoints[96*2+1]);
    vec2 rightEyeCenter=vec2(cartesianPoints[97*2],cartesianPoints[97*2+1]);
    float eyeDistance = distance(leftEyeCenter, rightEyeCenter); // 两个瞳孔的距离
    
    float r=eyeDistance*0.4;
    float dis1=distance(vec2(x1,y), coordinate);
    float dis2=distance(vec2(x2,y), coordinate);
    if(dis1<r || dis2<r){
        float rate=1.0;
        if(dis1<r){
            rate=reshapeIntensity*(1.0-dis1/r);
        }
        if(dis2<r){
            rate=reshapeIntensity*(1.0-dis2/r);
        }
        sorce.rgb=clamp(sorce.rgb+rate*vec3(1.0,0.5,0.5),0.0,1.0);
    }
    
    // 输出图像
    gl_FragColor = sorce;
}
