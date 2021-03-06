//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MailCore/MCMessageDataSource-Protocol.h>

@class MCMessage, NSData, NSMutableSet, NSString;
@protocol MCMailAccount, MCMailbox;

@interface MCMemoryDataSource : NSObject <MCMessageDataSource>
{
    NSMutableSet *_uniqueStrings;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    NSData *_separator;	// 24 = 0x18
}

@property(readonly, copy, nonatomic) NSData *separator; // @synthesize separator=_separator;
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
// - (void).cxx_destruct;	// IMP=0x00000000000574ce
- (id)setPersistenceConversationFlags:(unsigned long long)arg1 forMessages:(id)arg2;	// IMP=0x000000000005738b
- (void)unmuteConversationForMessages:(id)arg1;	// IMP=0x0000000000057385
- (void)muteConversationForMessages:(id)arg1;	// IMP=0x000000000005737f
- (id)uniquedString:(id)arg1;	// IMP=0x00000000000572f0
- (void)flushAllCaches;	// IMP=0x00000000000572ea
- (void)invalidateMessage:(id)arg1;	// IMP=0x00000000000572e4
- (void)sendResponseType:(BOOL)arg1 forMeetingMessage:(id)arg2 completionHandler:(id)arg3;	// IMP=0x00000000000572de
- (id)routeMessages:(id)arg1 fetchingBodies:(BOOL)arg2 messagesNeedingBodies:(id)arg3;	// IMP=0x00000000000571f8
- (void)doCompact;	// IMP=0x00000000000571f2
@property(readonly, nonatomic) BOOL canCompact;
- (void)deleteMessages:(id)arg1 moveToTrash:(BOOL)arg2;	// IMP=0x00000000000570ae
- (void)saveSnippetsForMessages:(id)arg1;	// IMP=0x00000000000570a8
- (void)setNumberOfAttachments:(unsigned int)arg1 isSigned:(BOOL)arg2 isEncrypted:(BOOL)arg3 forMessage:(id)arg4;	// IMP=0x0000000000056ffa
- (id)attachmentsDirectoryForMessage:(id)arg1 partNumber:(id)arg2;	// IMP=0x0000000000056ff2
- (id)attachmentsDirectoryForMessage:(id)arg1;	// IMP=0x0000000000056fea
- (void)setColor:(id)arg1 highlightTextOnly:(BOOL)arg2 forMessages:(id)arg3;	// IMP=0x0000000000056dff
- (id)setJunkMailLevel:(long long)arg1 forMessages:(id)arg2 trainJunkMailDatabase:(BOOL)arg3 userRecorded:(BOOL)arg4;	// IMP=0x0000000000056d48
- (id)_flagChangeDictionaryForJunkMailLevel:(long long)arg1 forMessages:(id)arg2 userRecorded:(BOOL)arg3 changedMessages:(id)arg4;	// IMP=0x0000000000056874
- (void)messageFlagsDidChange:(id)arg1 flags:(id)arg2;	// IMP=0x000000000005675a
- (void)setFlagWithKey:(id)arg1 state:(BOOL)arg2 forMessages:(id)arg3;	// IMP=0x0000000000056654
- (void)async_setFlagWithKey:(id)arg1 state:(BOOL)arg2 forMessages:(id)arg3;	// IMP=0x0000000000056559
- (id)setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2;	// IMP=0x00000000000561f6
- (void)async_setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2;	// IMP=0x00000000000561a6
- (id)bodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id *)arg2 fetchIfNotAvailable:(BOOL)arg3 allowPartial:(BOOL)arg4;	// IMP=0x000000000005610c
- (id)bodyDataForMessage:(id)arg1 fetchIfNotAvailable:(BOOL)arg2 allowPartial:(BOOL)arg3;	// IMP=0x0000000000056003
- (id)headerDataForMessage:(id)arg1 fetchIfNotAvailable:(BOOL)arg2 allowPartial:(BOOL)arg3;	// IMP=0x0000000000055f0c
- (void)getTopLevelMimePart:(id *)arg1 headers:(id *)arg2 body:(id *)arg3 forMessage:(id)arg4 fetchIfNotAvailable:(BOOL)arg5 updateFlags:(BOOL)arg6 allowPartial:(BOOL)arg7 skipSignatureVerification:(BOOL)arg8;	// IMP=0x0000000000055d0a
- (id)messageForMessageID:(id)arg1;	// IMP=0x0000000000055d02
@property(readonly, nonatomic) id <MCMailbox> mailbox;
@property(readonly, nonatomic) id <MCMailAccount> account;
@property(readonly) BOOL isReadOnly;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000055cdf
@property(readonly, nonatomic) MCMessage *message;
- (id)init;	// IMP=0x0000000000055bda
- (id)initWithData:(id)arg1;	// IMP=0x0000000000055b0d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *displayName;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

