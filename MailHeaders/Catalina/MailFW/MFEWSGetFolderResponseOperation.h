//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MailFW/MFEWSResponseOperation.h>

@class EWSGetFolderResponseType, NSArray;

@interface MFEWSGetFolderResponseOperation : MFEWSResponseOperation
{
    NSArray *_EWSFolders;	// 8 = 0x8
    NSArray *_EWSFolderIdsRequested;	// 16 = 0x10
}

@property(copy) NSArray *EWSFolderIdsRequested; // @synthesize EWSFolderIdsRequested=_EWSFolderIdsRequested;
@property(copy) NSArray *EWSFolders; // @synthesize EWSFolders=_EWSFolders;
// - (void).cxx_destruct;	// IMP=0x0000000000086d05
- (void)executeOperation;	// IMP=0x0000000000086761
- (void)prepareToExecuteWithResponse:(id)arg1 forRequestOperation:(id)arg2;	// IMP=0x0000000000086507
@property(retain) EWSGetFolderResponseType *response;

@end

