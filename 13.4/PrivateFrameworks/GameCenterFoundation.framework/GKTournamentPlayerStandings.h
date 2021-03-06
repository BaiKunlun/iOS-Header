//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GKTournamentPlayerStandingsInternal;

@interface GKTournamentPlayerStandings : NSObject
{
    GKTournamentPlayerStandingsInternal *_internal;
}

- (void).cxx_destruct;
@property(retain) GKTournamentPlayerStandingsInternal *internal; // @synthesize internal=_internal;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithInternalRepresentation:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) long long friendCount; // @dynamic friendCount;
@property(readonly, nonatomic) long long friendRank; // @dynamic friendRank;
@property(readonly, nonatomic) long long globalPlayerCount; // @dynamic globalPlayerCount;
@property(readonly, nonatomic) long long globalRank; // @dynamic globalRank;
@property(readonly, nonatomic) long long replayCount; // @dynamic replayCount;
@property(readonly, nonatomic) long long score; // @dynamic score;
@property(readonly, nonatomic) long long topScore; // @dynamic topScore;

@end

