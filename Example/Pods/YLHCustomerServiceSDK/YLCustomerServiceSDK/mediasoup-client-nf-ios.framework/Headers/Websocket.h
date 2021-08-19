//
//  Websocket.h
//  mediasoup-client-ios
//
//  Created by zhangyun on 2020/8/15.
//  Copyright © 2020 Denvir Ethan. All rights reserved.
//

#import "SocketRocket.h"
#import <Foundation/Foundation.h>

@class Websocket;

NS_ASSUME_NONNULL_BEGIN

/** 定义的事件类型 */
typedef NS_ENUM(NSUInteger, SocketEventType) {
    SocketEventTypeOpen,//socket已打开
    SocketEventTypeClose,//socket已关闭
    SocketEventTypeFail,//socket连接失败
    SocketEventTypeRequest,//有新的请求
    SocketEventTypeNotify,//有notify消息
    SocketEventTypeNetWorkError,//网络异常
};

typedef void (^ResultBlock)(id _Nullable receiveMessage);


@protocol SocketDelegate <NSObject>

/** socket事件回调 */
- (void)socketEvent:(Websocket *)slsocket eventType:(SocketEventType)eventType message:(NSDictionary * _Nullable)message;

@end


@protocol RequestGenerator <NSObject>

/** 生成请求消息体 */
- (void)request:(NSMutableDictionary *)req;

@end

@interface Websocket : NSObject

@property (nonatomic, strong) id<SocketDelegate> delegate;

/**
 * 单例
 */
+(instancetype)shareInstance;

/** 连接服务器 */
-(void)socketConnectWithRoomId:(NSString *)url;

/** 断开连接 */
- (void)disConnect;

-(NSDictionary*)syncRequest:(NSString*)method;
-(NSDictionary*)syncRequest:(NSString*)method request:(id <RequestGenerator>) generator;

-(void)request:(NSString*)method;
-(void)request:(NSString*)method request:(id <RequestGenerator>) generator;

-(void)acceptRequest:(NSString *)requestId response:(NSDictionary*)responseData;
-(void)rejectRequest:(NSString *)requestId errorNo:(NSString *)code reason:(NSString*)errorReason;

@end

NS_ASSUME_NONNULL_END
