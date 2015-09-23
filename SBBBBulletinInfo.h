/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBRowInfo.h"


__attribute__((visibility("hidden")))
@interface SBBBBulletinInfo : SBRowInfo {
	SBBBSectionInfo *_sectionInfo;
	SBItemInfoLayoutCache *_layoutCache;
	UIImage *_attachmentImage;
	CGSize _attachmentImageSize;
	float _secondaryTextHeight;
	BOOL _suppressingMessageForPrivacy;
	BOOL _isCachedMessageSuppressionValid;
	UIViewController *_secondaryContentViewController;
	UIColor *_secondaryTextColor;
	NSDate *_effectiveRecencyDate;
	int _relevanceDateFormatStyle;
}
@property(retain, nonatomic) UIImage *attachmentImage;
@property(assign, nonatomic) CGSize attachmentImageSize;
@property(copy, nonatomic) NSDate *effectiveRecencyDate;
@property(assign, nonatomic) int relevanceDateFormatStyle;
@property(readonly, assign, nonatomic) BBBulletin *representedBulletin;
@property(readonly, retain, nonatomic) UIViewController *secondaryContentViewController;
@property(readonly, assign, nonatomic) UIColor *secondaryTextColor;
@property(retain, nonatomic) SBBBSectionInfo *sectionInfo;
@property(readonly, assign, nonatomic, getter=isSuppressingMessageForPrivacy) BOOL suppressingMessageForPrivacy;
- (id)_attachmentImageToDisplay;
- (int)_bbDateFormatStyle;
- (void)_configureEventDateLabel:(id)label;
- (void)_configureRelevanceDateLabel:(id)label;
- (CGSize)_effectiveAttachmentImageSize;
- (id)_endDate;
- (id)_eventDateLabel;
- (id)_eventDateLabelForDisplay;
- (id)_primaryText;
- (id)_primaryTextColor;
- (id)_relevanceDateLabel;
- (XXStruct_Xx1ZfA)_relevanceDateLabelDescription;
- (id)_relevanceDateTextColor;
- (id)_secondaryContentView;
- (id)_secondaryText;
- (id)_secondaryTextColor;
- (id)_secondaryTextToDisplay;
- (id)_subtitleText;
- (id)_subtitleTextColor;
- (id)_subtitleTextToDisplay;
- (void)dealloc;
- (id)description;
- (float)heightForReusableViewForNotificationCenterTableViewController:(id)notificationCenterTableViewController layoutMode:(int)mode sectionLocation:(int)location;
- (id)identifier;
- (void)invalidateCachedLayoutData;
- (void)populateReusableView:(id)view;
- (void)prepareWithCompletion:(id)completion;
- (Class)reusableViewClass;
@end

