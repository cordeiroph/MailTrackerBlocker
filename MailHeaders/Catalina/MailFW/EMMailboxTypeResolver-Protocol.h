//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MailFW/NSObject-Protocol.h>

@class EMObjectID, NSSet;

@protocol EMMailboxTypeResolver <NSObject>
- (long long)mailboxTypeForMailboxObjectID:(EMObjectID *)arg1;
- (NSSet *)mailboxObjectIDsForMailboxType:(long long)arg1;
@end
