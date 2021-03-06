//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MarkupDrawingControllerDelegate-Protocol.h"
#import "NSSharingServiceDelegate-Protocol.h"
#import "NSSharingServicePickerDelegate-Protocol.h"

@class EditableWebMessageDocument, MarkupDrawingController, NSString, NSView;
@protocol AttachmentManagerDelegate, EditingWebMessageControllerDelegate;

@interface EditingWebMessageController : NSObject <MarkupDrawingControllerDelegate, NSSharingServiceDelegate, NSSharingServicePickerDelegate>
{
    NSView *_webView;	// 8 = 0x8
    MarkupDrawingController *_drawingController;	// 16 = 0x10
    EditableWebMessageDocument *_document;	// 24 = 0x18
    BOOL _isForURLSharing;	// 32 = 0x20
    id <AttachmentManagerDelegate> _attachmentDelegate;	// 40 = 0x28
    id <EditingWebMessageControllerDelegate> _editingDelegate;	// 48 = 0x30
    struct CGRect _frameOfItemToShare;	// 56 = 0x38
}

@property(nonatomic) BOOL isForURLSharing; // @synthesize isForURLSharing=_isForURLSharing;
@property(nonatomic) struct CGRect frameOfItemToShare; // @synthesize frameOfItemToShare=_frameOfItemToShare;
@property(nonatomic) __weak id <EditingWebMessageControllerDelegate> editingDelegate; // @synthesize editingDelegate=_editingDelegate;
@property(nonatomic) __weak id <AttachmentManagerDelegate> attachmentDelegate; // @synthesize attachmentDelegate=_attachmentDelegate;
@property(readonly, nonatomic) NSView *webView; // @synthesize webView=_webView;
@property(readonly, nonatomic) EditableWebMessageDocument *document; // @synthesize document=_document;
// - (void).cxx_destruct;	// IMP=0x000000010014f821
- (void)_adjustSpellingAndGrammarMenuItems:(id)arg1 checkSpellingWhileTypingTag:(long long)arg2 checkGrammarWithSpellingTag:(long long)arg3;	// IMP=0x000000010014f34b
- (id)destinationPathForDownloadWithSuggestedFilename:(id)arg1;	// IMP=0x000000010014f088
- (void)addOpenLinkMenuItemsIfNeededWithURL:(id)arg1 toArray:(id)arg2;	// IMP=0x000000010014edcf
- (void)addPasteAndQuoteLevelMenuItemsToArray:(id)arg1;	// IMP=0x000000010014e750
- (BOOL)openURL:(id)arg1 keepAppFocus:(BOOL)arg2;	// IMP=0x000000010014e6ce
- (BOOL)_isInternalURL:(id)arg1;	// IMP=0x000000010014e64d
- (id)sharingService:(id)arg1 sourceWindowForShareItems:(id)arg2 sharingContentScope:(long long *)arg3;	// IMP=0x000000010014e630
- (id)sharingService:(id)arg1 transitionImageForShareItem:(id)arg2 contentRect:(struct CGRect *)arg3;	// IMP=0x000000010014e5c6
- (struct CGRect)sharingService:(id)arg1 sourceFrameOnScreenForShareItem:(id)arg2;	// IMP=0x000000010014e5a7
- (id)sharingServicePicker:(id)arg1 delegateForSharingService:(id)arg2;	// IMP=0x000000010014e59e
- (void)sharingService:(id)arg1 didShareItems:(id)arg2;	// IMP=0x000000010014e56c
- (id)sharingServicePicker:(id)arg1 sharingServicesForItems:(id)arg2 proposedSharingServices:(id)arg3;	// IMP=0x000000010014e366
- (void)markupDrawingController:(id)arg1 didCancelWithError:(id)arg2;	// IMP=0x000000010014e34c
- (void)markupDrawingController:(id)arg1 didCreateDrawingWithURL:(id)arg2;	// IMP=0x000000010014e2c8
- (void)_openLinkBehind:(id)arg1;	// IMP=0x000000010014e274
- (void)_openLink:(id)arg1;	// IMP=0x000000010014e223
- (id)init;	// IMP=0x000000010014e20f
- (id)initWithDocument:(id)arg1;	// IMP=0x000000010014e1a4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

