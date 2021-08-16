//
//  Macro.h
//  mediasoup-client-ios
//
//  Created by 永亮iOS on 2020/12/10.
//  Copyright © 2020 Denvir Ethan. All rights reserved.
//

/** 消息类型 */
static NSString * const REQUEST = @"request";
static NSString * const RESPONSE = @"response";
static NSString * const NOTIFICATION = @"notification";

/** 事件名称 */
static NSString * const NEWCONSUMER = @"newConsumer";//新的消费者加入
static NSString * const CONSUMERCLOSED = @"consumerClosed";//消费者退出

#define IsNull(str) (str == nil || str == NULL || [str isKindOfClass:[NSNull class]])
