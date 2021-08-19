//
//  Peers.h
//  mediasoup-client-ios
//
//  Created by zhangyun on 2020/8/14.
//  Copyright © 2020 Denvir Ethan. All rights reserved.
//

#import "Peer.h"
#import "Consumer.h"
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Peers : NSObject

@property(nonatomic, strong) NSMutableDictionary* mPeerInfo;

-(void)addPeer:(NSString*)peerId peerInfo:(NSDictionary*)peer;
-(void)removePeer:(NSString*)peerId;

-(void)setPeerDisplayName:(NSString*)peerId name:(NSString*)displayName;
-(void)setPeerIsAnchor:(NSString*)peerId anchor:(BOOL)bIsAnchor;

-(void)addConsumer:(NSString*)peerId comsumer:(Consumer*)consumer;
-(void)removeConsumer:(NSString*)peerId comsumerId:(NSString*)id;

-(Peer*)getPeer:(NSString*)peerId;

-(NSMutableArray*)getAllPeers;

-(void)clear;

@end

NS_ASSUME_NONNULL_END
