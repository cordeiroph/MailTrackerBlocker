//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EmailDaemon/EDMailboxPersistence.h>

@class EDPersistenceDatabase;

@interface MFMailboxPersistence_macOS : EDMailboxPersistence
{
    EDPersistenceDatabase *_database;	// 8 = 0x8
}

@property(readonly, nonatomic) EDPersistenceDatabase *database; // @synthesize database=_database;
// - (void).cxx_destruct;	// IMP=0x000000000016f413
- (id)mailboxDatabaseIDsForMailboxObjectIDs:(id)arg1;	// IMP=0x000000000016f27a
- (id)initWithMailboxProvider:(id)arg1 database:(id)arg2;	// IMP=0x000000000016f1ef

@end

