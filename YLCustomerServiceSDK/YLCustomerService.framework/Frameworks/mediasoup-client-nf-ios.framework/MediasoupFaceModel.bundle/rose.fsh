precision highp float;
varying highp vec2 textureCoordinate;

uniform sampler2D inputImageTexture;
uniform sampler2D curveTexture;//curve
//uniform sampler2D metalTexture;//metal

uniform float strength;
//uniform highp float S;
//uniform highp float H;
//uniform highp float L;

void main()
{
	lowp vec4 sourceColor = texture2D( inputImageTexture, textureCoordinate.xy);
	lowp vec4 textureColor = sourceColor;
	highp vec4 rgba=vec4(0,0,0,0);
	
	highp float redCurveValue = texture2D(curveTexture, vec2(textureColor.r, 0.0)).r;
	highp float greenCurveValue = texture2D(curveTexture, vec2(textureColor.g, 0.0)).g;
	highp float blueCurveValue = texture2D(curveTexture, vec2(textureColor.b, 0.0)).b;

	redCurveValue = texture2D(curveTexture, vec2(redCurveValue, 0.0)).a;
	greenCurveValue = texture2D(curveTexture, vec2(greenCurveValue, 0.0)).a;
	blueCurveValue = texture2D(curveTexture, vec2(blueCurveValue, 0.0)).a;

	redCurveValue = redCurveValue * 1.25 - 0.12549;
	greenCurveValue = greenCurveValue * 1.25 - 0.12549; 
	blueCurveValue = blueCurveValue * 1.25 - 0.12549;

	textureColor = vec4(redCurveValue, greenCurveValue, blueCurveValue, 1.0);
	textureColor = (sourceColor - textureColor) * 0.549 + textureColor;
	
    rgba = mix(sourceColor, textureColor, 0.5);
	
	redCurveValue = clamp(rgba.r*0.92666,0.0,1.0 );
	greenCurveValue = clamp(rgba.g*0.91333,0.0,1.0  );
	blueCurveValue = clamp(rgba.b*0.96,0.0,1.0 );
	
	rgba=vec4(redCurveValue,greenCurveValue,blueCurveValue,1.0);
	
//	vec4 metal = texture2D(metalTexture, textureCoordinate);
	
    gl_FragColor = mix(rgba,sourceColor,0.5);
} 
