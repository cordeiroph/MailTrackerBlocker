//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MailFW/MFEWSTask.h>

#import <MailFW/MCBodyTracker-Protocol.h>
#import <MailFW/MFEWSBodyFetchOperationDelegate-Protocol.h>
#import <MailFW/MFEWSBodyPersistOperationDelegate-Protocol.h>
#import <MailFW/MFEWSGetMessagesNeedingBodiesOperationDelegate-Protocol.h>

@class MFEWSBodyFetchOperation, MFEWSBodyPersistOperation, MFEWSGetMessagesNeedingBodiesOperation, NSMutableDictionary, NSMutableSet, NSString;

@interface MFEWSBackgroundBodyFetchTask : MFEWSTask <MFEWSBodyFetchOperationDelegate, MFEWSBodyPersistOperationDelegate, MFEWSGetMessagesNeedingBodiesOperationDelegate, MCBodyTracker>
{
    NSMutableSet *_mailboxesNeedingChecking;	// 8 = 0x8
    NSMutableSet *_mandatoryMessagesNeedingBodies;	// 16 = 0x10
    NSMutableSet *_discretionaryMessagesNeedingBodies;	// 24 = 0x18
    NSMutableDictionary *_fetchedBodiesByMessage;	// 32 = 0x20
    NSMutableDictionary *_fetchedCalendarEventsByMessage;	// 40 = 0x28
    MFEWSGetMessagesNeedingBodiesOperation *_getMessagesNeedingBodiesOperation;	// 48 = 0x30
    MFEWSBodyFetchOperation *_mandatoryBodyFetchOperation;	// 56 = 0x38
    MFEWSBodyFetchOperation *_discretionaryBodyFetchOperation;	// 64 = 0x40
    MFEWSBodyPersistOperation *_bodyPersistOperation;	// 72 = 0x48
}

// - (void).cxx_destruct;	// IMP=0x0000000000067067
- (void)bodyTracker:(id)arg1 didCacheBodiesForMessages:(id)arg2;	// IMP=0x0000000000066c3b
- (void)bodyPersistOperation:(id)arg1 didPersistBodyForMessages:(id)arg2;	// IMP=0x0000000000066831
- (void)bodyFetchOperation:(id)arg1 didFetchBodiesByMessage:(id)arg2 calendarEventsByMessage:(id)arg3 missedMessages:(id)arg4;	// IMP=0x0000000000066107
- (void)getMessagesNeedingBodiesOperation:(id)arg1 didGetMessagesNeedingBodies:(id)arg2 forMailbox:(id)arg3;	// IMP=0x0000000000065bfe
- (void)operationFinished:(id)arg1;	// IMP=0x0000000000065ac8
- (void)recalculatePriorities;	// IMP=0x000000000006575e
- (id)nextPersistenceOperation;	// IMP=0x00000000000655df
- (id)nextNetworkOperation;	// IMP=0x00000000000653ca
- (void)fetchBodiesForMailboxes:(id)arg1;	// IMP=0x000000000006527c
@property(retain, nonatomic) MFEWSBodyPersistOperation *bodyPersistOperation;
@property(retain, nonatomic) MFEWSBodyFetchOperation *discretionaryBodyFetchOperation;
@property(retain, nonatomic) MFEWSBodyFetchOperation *mandatoryBodyFetchOperation;
@property(retain, nonatomic) MFEWSGetMessagesNeedingBodiesOperation *getMessagesNeedingBodiesOperation;
- (void)setDelegate:(id)arg1;	// IMP=0x0000000000064f92
- (id)delegate;	// IMP=0x0000000000064f63
- (id)init;	// IMP=0x0000000000064e94
- (id)initWithAccountName:(id)arg1;	// IMP=0x0000000000064d06

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

