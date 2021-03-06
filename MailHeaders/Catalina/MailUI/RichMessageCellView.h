//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "RichMessageCellBase.h"

@class CNAvatarViewController, MessageStatusStackView, NSAttributedString, NSImageView, NSLayoutConstraint, NSMutableArray, NSTextField, ThreadDisclosureTextField, ToCCIndicator;

@interface RichMessageCellView : RichMessageCellBase
{
    BOOL _showToCc;	// 108 = 0x6c
    BOOL _showSize;	// 109 = 0x6d
    BOOL _showMailbox;	// 110 = 0x6e
    unsigned long long _numberOfSnippetLines;	// 112 = 0x70
    NSTextField *_senderView;	// 120 = 0x78
    NSTextField *_subjectView;	// 128 = 0x80
    NSTextField *_snippetView;	// 136 = 0x88
    NSTextField *_dateView;	// 144 = 0x90
    CNAvatarViewController *_avatarViewController;	// 152 = 0x98
    NSLayoutConstraint *_avatarWidthConstraint;	// 160 = 0xa0
    ToCCIndicator *_toCcIndicator;	// 168 = 0xa8
    NSLayoutConstraint *_toCcHeightConstraint;	// 176 = 0xb0
    NSLayoutConstraint *_toCcSenderAlignment;	// 184 = 0xb8
    NSLayoutConstraint *_toCcSubjectAlignment;	// 192 = 0xc0
    NSLayoutConstraint *_toCcSubjectSpacing;	// 200 = 0xc8
    ThreadDisclosureTextField *_threadDisclosureControl;	// 208 = 0xd0
    NSLayoutConstraint *_threadMargin;	// 216 = 0xd8
    NSLayoutConstraint *_threadDatePadding;	// 224 = 0xe0
    NSLayoutConstraint *_threadSubjectPadding;	// 232 = 0xe8
    NSLayoutConstraint *_threadSnippetPadding;	// 240 = 0xf0
    NSLayoutConstraint *_threadSizeVerticalPadding;	// 248 = 0xf8
    NSLayoutConstraint *_threadSizeHorizontalPadding;	// 256 = 0x100
    NSImageView *_unreadView;	// 264 = 0x108
    NSImageView *_vipView;	// 272 = 0x110
    NSImageView *_flagStatusView;	// 280 = 0x118
    NSImageView *_attachmentView;	// 288 = 0x120
    NSImageView *_statusView;	// 296 = 0x128
    NSImageView *_mutedView;	// 304 = 0x130
    NSLayoutConstraint *_statusAlignment;	// 312 = 0x138
    NSLayoutConstraint *_statusSenderPadding;	// 320 = 0x140
    NSLayoutConstraint *_statusDatePadding;	// 328 = 0x148
    NSLayoutConstraint *_statusSenderHeight;	// 336 = 0x150
    MessageStatusStackView *_statusStack;	// 344 = 0x158
    NSTextField *_mailboxView;	// 352 = 0x160
    NSLayoutConstraint *_subjectMailboxPadding;	// 360 = 0x168
    NSLayoutConstraint *_subjectMailboxAlignment;	// 368 = 0x170
    NSLayoutConstraint *_mailboxDateAlignment;	// 376 = 0x178
    NSLayoutConstraint *_mailboxThreadPadding;	// 384 = 0x180
    NSLayoutConstraint *_mailboxSizePadding;	// 392 = 0x188
    NSTextField *_sizeView;	// 400 = 0x190
    NSLayoutConstraint *_sizeDateAlignment;	// 408 = 0x198
    NSLayoutConstraint *_subjectSizeAlignment;	// 416 = 0x1a0
    NSLayoutConstraint *_subjectSizeHorizontalPadding;	// 424 = 0x1a8
    NSMutableArray *_flagViews;	// 432 = 0x1b0
}

+ (double)photoDimensionForPhotoSize:(long long)arg1;	// IMP=0x0000000100264b8a
+ (id)keyPathsForValuesAffectingThreadCount;	// IMP=0x0000000100262f22
+ (id)keyPathsForValuesAffectingIsOpen;	// IMP=0x0000000100262ebd
+ (id)keyPathsForValuesAffectingSnippetString;	// IMP=0x0000000100262c18
@property(readonly, nonatomic) NSMutableArray *flagViews; // @synthesize flagViews=_flagViews;
@property(retain, nonatomic) NSLayoutConstraint *subjectSizeHorizontalPadding; // @synthesize subjectSizeHorizontalPadding=_subjectSizeHorizontalPadding;
@property(retain, nonatomic) NSLayoutConstraint *subjectSizeAlignment; // @synthesize subjectSizeAlignment=_subjectSizeAlignment;
@property(retain, nonatomic) NSLayoutConstraint *sizeDateAlignment; // @synthesize sizeDateAlignment=_sizeDateAlignment;
@property(retain, nonatomic) NSTextField *sizeView; // @synthesize sizeView=_sizeView;
@property(retain, nonatomic) NSLayoutConstraint *mailboxSizePadding; // @synthesize mailboxSizePadding=_mailboxSizePadding;
@property(retain, nonatomic) NSLayoutConstraint *mailboxThreadPadding; // @synthesize mailboxThreadPadding=_mailboxThreadPadding;
@property(retain, nonatomic) NSLayoutConstraint *mailboxDateAlignment; // @synthesize mailboxDateAlignment=_mailboxDateAlignment;
@property(retain, nonatomic) NSLayoutConstraint *subjectMailboxAlignment; // @synthesize subjectMailboxAlignment=_subjectMailboxAlignment;
@property(retain, nonatomic) NSLayoutConstraint *subjectMailboxPadding; // @synthesize subjectMailboxPadding=_subjectMailboxPadding;
@property(retain, nonatomic) NSTextField *mailboxView; // @synthesize mailboxView=_mailboxView;
@property(retain, nonatomic) MessageStatusStackView *statusStack; // @synthesize statusStack=_statusStack;
@property(retain, nonatomic) NSLayoutConstraint *statusSenderHeight; // @synthesize statusSenderHeight=_statusSenderHeight;
@property(retain, nonatomic) NSLayoutConstraint *statusDatePadding; // @synthesize statusDatePadding=_statusDatePadding;
@property(retain, nonatomic) NSLayoutConstraint *statusSenderPadding; // @synthesize statusSenderPadding=_statusSenderPadding;
@property(retain, nonatomic) NSLayoutConstraint *statusAlignment; // @synthesize statusAlignment=_statusAlignment;
@property(retain, nonatomic) NSImageView *mutedView; // @synthesize mutedView=_mutedView;
@property(retain, nonatomic) NSImageView *statusView; // @synthesize statusView=_statusView;
@property(retain, nonatomic) NSImageView *attachmentView; // @synthesize attachmentView=_attachmentView;
@property(retain, nonatomic) NSImageView *flagStatusView; // @synthesize flagStatusView=_flagStatusView;
@property(retain, nonatomic) NSImageView *vipView; // @synthesize vipView=_vipView;
@property(retain, nonatomic) NSImageView *unreadView; // @synthesize unreadView=_unreadView;
@property(retain, nonatomic) NSLayoutConstraint *threadSizeHorizontalPadding; // @synthesize threadSizeHorizontalPadding=_threadSizeHorizontalPadding;
@property(retain, nonatomic) NSLayoutConstraint *threadSizeVerticalPadding; // @synthesize threadSizeVerticalPadding=_threadSizeVerticalPadding;
@property(retain, nonatomic) NSLayoutConstraint *threadSnippetPadding; // @synthesize threadSnippetPadding=_threadSnippetPadding;
@property(retain, nonatomic) NSLayoutConstraint *threadSubjectPadding; // @synthesize threadSubjectPadding=_threadSubjectPadding;
@property(retain, nonatomic) NSLayoutConstraint *threadDatePadding; // @synthesize threadDatePadding=_threadDatePadding;
@property(retain, nonatomic) NSLayoutConstraint *threadMargin; // @synthesize threadMargin=_threadMargin;
@property(retain, nonatomic) ThreadDisclosureTextField *threadDisclosureControl; // @synthesize threadDisclosureControl=_threadDisclosureControl;
@property(retain, nonatomic) NSLayoutConstraint *toCcSubjectSpacing; // @synthesize toCcSubjectSpacing=_toCcSubjectSpacing;
@property(retain, nonatomic) NSLayoutConstraint *toCcSubjectAlignment; // @synthesize toCcSubjectAlignment=_toCcSubjectAlignment;
@property(retain, nonatomic) NSLayoutConstraint *toCcSenderAlignment; // @synthesize toCcSenderAlignment=_toCcSenderAlignment;
@property(retain, nonatomic) NSLayoutConstraint *toCcHeightConstraint; // @synthesize toCcHeightConstraint=_toCcHeightConstraint;
@property(retain, nonatomic) ToCCIndicator *toCcIndicator; // @synthesize toCcIndicator=_toCcIndicator;
@property(retain, nonatomic) NSLayoutConstraint *avatarWidthConstraint; // @synthesize avatarWidthConstraint=_avatarWidthConstraint;
@property(retain, nonatomic) CNAvatarViewController *avatarViewController; // @synthesize avatarViewController=_avatarViewController;
@property(nonatomic) __weak NSTextField *dateView; // @synthesize dateView=_dateView;
@property(nonatomic) __weak NSTextField *snippetView; // @synthesize snippetView=_snippetView;
@property(nonatomic) __weak NSTextField *subjectView; // @synthesize subjectView=_subjectView;
@property(nonatomic) __weak NSTextField *senderView; // @synthesize senderView=_senderView;
- (unsigned long long)numberOfSnippetLines;	// IMP=0x0000000100265410
// - (void).cxx_destruct;	// IMP=0x00000001002659e4
- (void)setThreadDisclosureTarget:(id)arg1;	// IMP=0x000000010026539e
- (void)setThreadDisclosureAction:(SEL)arg1;	// IMP=0x0000000100265352
- (void)_updateFlagViewsWithImages:(id)arg1;	// IMP=0x0000000100264c8c
- (id)_anchorViewForNewFlag:(double *)arg1;	// IMP=0x0000000100264ba4
- (void)_updateAvatarViewWithContacts:(id)arg1;	// IMP=0x0000000100264815
- (void)_updateToCCIndicatorWithString:(id)arg1;	// IMP=0x000000010026465c
- (void)_updateThreadControlWithThreadCount:(unsigned long long)arg1;	// IMP=0x00000001002642cc
- (void)_updateSizeLabel;	// IMP=0x0000000100264003
- (void)_updateMailboxLabel;	// IMP=0x0000000100263d93
- (void)_updateReplyButtonWithImage:(id)arg1;	// IMP=0x0000000100263d06
- (void)_updateAttachmentViewWithImage:(id)arg1;	// IMP=0x0000000100263c79
- (void)_updateMutedIndicatorWithImage:(id)arg1;	// IMP=0x0000000100263bec
- (void)_updateVIPIndicatorWithImage:(id)arg1;	// IMP=0x0000000100263a70
- (void)_updateUnreadIndicatorWithImage:(id)arg1;	// IMP=0x000000010026389f
- (void)_updateStatusViewWithImage:(id)arg1;	// IMP=0x0000000100263706
- (void)prepareForReuse;	// IMP=0x0000000100263618
- (void)viewWillMoveToWindow:(id)arg1;	// IMP=0x0000000100263570
- (BOOL)acceptsFirstResponder;	// IMP=0x0000000100263565
- (BOOL)canBecomeKeyView;	// IMP=0x000000010026355d
- (void)setNumberOfSnippetLines:(unsigned long long)arg1;	// IMP=0x00000001002634b7
- (void)setBackgroundStyle:(long long)arg1;	// IMP=0x0000000100263380
- (void)setObjectValue:(id)arg1;	// IMP=0x0000000100262f86
@property(readonly, nonatomic) unsigned long long threadCount;
@property(readonly, nonatomic) BOOL isOpen;
@property(readonly, nonatomic) NSAttributedString *snippetString;
- (id)snippetStringAttributes;	// IMP=0x0000000100262c44
- (double)defaultRowHeight;	// IMP=0x0000000100262991
- (void)setShowSize:(BOOL)arg1;	// IMP=0x00000001002627b0
- (BOOL)showSize;	// IMP=0x000000010026279f
- (void)setShowMailbox:(BOOL)arg1;	// IMP=0x0000000100262729
- (BOOL)showMailbox;	// IMP=0x0000000100262718
- (void)setShowToCc:(BOOL)arg1;	// IMP=0x000000010026269a
- (BOOL)showToCc;	// IMP=0x0000000100262689
- (BOOL)isHighlighted;	// IMP=0x000000010026266b
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000100261fe5
- (void)dealloc;	// IMP=0x0000000100261f64
- (void)awakeFromNib;	// IMP=0x00000001002616a3
- (void)_richTableCellViewCommonInit;	// IMP=0x000000010026165b
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001002615fc
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001002615b5
- (void)updateFontsUsingBold:(BOOL)arg1;	// IMP=0x0000000100261261

@end

