/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

@class NSMutableArray;

@interface GEOVJunction : PBCodable
{
    NSMutableArray *_connectingRoads;
    NSMutableArray *_laneConnections;
}

@property(retain, nonatomic) NSMutableArray *laneConnections; // @synthesize laneConnections=_laneConnections;
@property(retain, nonatomic) NSMutableArray *connectingRoads; // @synthesize connectingRoads=_connectingRoads;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)laneConnectionsAtIndex:(unsigned int)arg1;
- (unsigned int)laneConnectionsCount;
- (void)addLaneConnections:(id)arg1;
- (void)clearLaneConnections;
- (id)connectingRoadAtIndex:(unsigned int)arg1;
- (unsigned int)connectingRoadsCount;
- (void)addConnectingRoad:(id)arg1;
- (void)clearConnectingRoads;
- (void)dealloc;

@end

