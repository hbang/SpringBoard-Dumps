/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBSearchText.h"
#import "SBAppSwitcherCacheVended.h"
#import "SBUIQuietModePlayability.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface XXUnknownSuperclass (AppSwitcherCacheVendedCompliance) <SBAppSwitcherCacheVended>
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, assign) unsigned hash;
@property(readonly, assign) Class superclass;
@end

@interface XXUnknownSuperclass (SBApplicationAdditions)
- (void)addObjectsFromDictionary:(id)dictionary forKeys:(id)keys;
@end

@interface XXUnknownSuperclass (SBArrayStackAdditions)
- (id)pop;
- (id)popObject:(id)object;
- (void)push:(id)push;
- (id)top;
@end

@interface XXUnknownSuperclass (CTHelpers)
- (id)callBarringFacility;
- (id)callClass;
- (id)callForwardingReason;
- (id)callingLineIDRestrictionValue;
- (id)callingLinePresentationValue;
- (id)callingNamePresentationValue;
- (id)connectedLineIDRestrictionValue;
- (id)connectedLinePresentationValue;
- (id)enabledString;
- (id)mmiProcedure;
- (id)serviceCenterAddress;
- (CFStringRef)settingType;
- (id)ssServiceType;
@end

@interface XXUnknownSuperclass (PrefsNotifications)
- (id)_alertStringForPref:(id)pref;
- (id)_callBarringString:(id)string;
- (id)_callForwardingString:(id)string;
- (id)_callWaitingString:(id)string;
- (id)_callingLineIDRestrictionString:(id)string;
- (id)_callingLinePresentationString:(id)string;
- (id)_callingNamePresentationString:(id)string;
- (id)_connectedLineIDRestrictionString:(id)string;
- (id)_connectedLinePresentationString:(id)string;
- (id)_fixedDialingString:(id)string;
- (id)_serviceCenterAddressString:(id)string;
- (id)_simLockString:(id)string;
- (id)_ssPasswordString:(id)string;
- (void)addPrefNotification:(id)notification withUserInfo:(id)userInfo;
- (id)prefsNotificationsAlertString;
@end

@interface XXUnknownSuperclass (SpringBoard)
- (void)_sb_safeAddObject:(id)object;
@end

@interface XXUnknownSuperclass (SBQueueAdditions)
- (id)_sb_dequeue;
- (void)_sb_enqueue:(id)enqueue;
- (id)_sb_peek;
@end

@interface XXUnknownSuperclass (AlertItemsAdditions)
- (void)addUniqueObjectsOfClass:(Class)aClass toArray:(id)array;
- (id)objectOfClass:(Class)aClass;
@end

@interface XXUnknownSuperclass (SpringBoard)
+ (id)sbf_preferredFontForTextStyle:(id)textStyle symbolicTraits:(unsigned)traits options:(unsigned)options;
@end

@interface XXUnknownSuperclass (SpringBoard)
- (void)sbf_updateDictionaryForKey:(id)key withChanges:(id)changes;
- (void)sbf_updateTextAttributesForKey:(id)key;
@end

@interface XXUnknownSuperclass (SBSearchText) <SBSearchText>
@property(copy, nonatomic) NSAttributedString *attributedText;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, assign) unsigned hash;
@property(assign) unsigned numberOfLines;
@property(readonly, assign) Class superclass;
@property(copy, nonatomic) NSString *text;
@end

@interface XXUnknownSuperclass (UIViewController_SpringBoard)
- (BOOL)sb_childViewController:(id)controller beginAppearanceTransitionIfNecessary:(BOOL)necessary animated:(BOOL)animated;
- (BOOL)sb_childViewControllerEndAppearanceTransitionIfNecessary:(id)necessary;
@end

@interface XXUnknownSuperclass (SpringBoardAdditions)
@property(assign, nonatomic, setter=sb_setShowsDebugLabel:) BOOL sb_showsDebugLabel;
- (id)sb_debugLabel;
@end

@interface XXUnknownSuperclass (SBAdditions)
- (void)logStateOperationCountGreaterThan:(int)than;
@end

@interface XXUnknownSuperclass (SBGraphics)
@property(readonly, assign, nonatomic) CGSize pixelSize;
+ (unsigned long)sbg_bytesNeededForSize:(CGSize)size scale:(float)scale withContextType:(int)contextType;
+ (id)sbg_imageFromContextWithSize:(CGSize)size scale:(float)scale type:(int)type pool:(id)pool drawing:(id)drawing;
+ (id)sbg_imageFromContextWithSize:(CGSize)size scale:(float)scale type:(int)type pool:(id)pool drawing:(id)drawing encapsulation:(id)encapsulation;
- (CGImageSourceRef)_newSource;
- (CGImageRef)_newThumbnailWithImageSource:(CGImageSourceRef)imageSource forMaxPixelDimension:(float)maxPixelDimension;
- (CGImageRef)_newThumbnailWithJPEG:(id)jpeg forMaxPixelDimension:(float)maxPixelDimension;
- (id)_thumbnailFitToSize:(CGSize)size;
- (BOOL)isAnimated;
- (id)sbg_memoryMappedImageWithPool:(id)pool;
- (id)sbg_squareImage;
- (id)sbg_thumbnailFitToSize:(CGSize)size;
- (BOOL)sbs_hasAlpha;
@end

@interface XXUnknownSuperclass (SBBulletinBanner)
- (id)_receivedTime;
- (void)_setReceivedTime:(id)time;
@end

@interface XXUnknownSuperclass (SpringBoard)
- (float)sb_yPositionForLabelWithContainerBounds:(CGRect)containerBounds baselineOffset:(float)offset font:(id)font;
- (float)sb_yPositionForLabelWithContainerBounds:(CGRect)containerBounds lineHeight:(float)height baselineOffset:(float)offset font:(id)font;
- (float)sb_yPositionForLayoutAfterLabel:(id)layoutAfterLabel baselineOffset:(float)offset;
@end

@interface XXUnknownSuperclass (SBIconIndex)
+ (id)emptyPath;
+ (id)indexPathWithIconIndex:(unsigned)iconIndex listIndex:(unsigned)index;
- (id)_subpathWithRange:(NSRange)range;
- (id)indexPathWithPrefixPath:(id)prefixPath;
- (BOOL)isPrefixedByPath:(id)path;
- (unsigned)sbIconIndex;
- (unsigned)sbListIndex;
- (id)subpathFromPosition:(unsigned)position;
@end

@interface XXUnknownSuperclass (SBIconLabelLegibilityImage)
- (BOOL)isIconLabelLegibilityImage;
@end

@interface XXUnknownSuperclass (WidgetsSettings)
- (id)sb_iconImage;
@end

@interface XXUnknownSuperclass (SBUtilities)
+ (id)soundWithBBSound:(id)bbsound;
@end

@interface XXUnknownSuperclass (SBUtilities)
- (id)iconImageWithFormat:(int)format;
- (id)iconImageWithFormat:(int)format overridingBundleID:(id)anId;
@end

@interface XXUnknownSuperclass (SBUtilities) <SBUIQuietModePlayability>
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, assign) unsigned hash;
@property(readonly, assign) Class superclass;
- (BOOL)isCritical;
- (BOOL)overridesQuietMode;
- (id)sb_applicationDisplayName;
- (id)sb_defaultTitle;
- (id)sectionIconImageWithFormat:(int)format;
@end

@interface XXUnknownSuperclass (SBUtilities)
- (id)preferredImageForContentSizeCategory:(id)contentSizeCategory tintColor:(id)color;
@end

@interface XXUnknownSuperclass (SBBulletinBannerControllerTest)
@property(copy, nonatomic) NSString *bulletinID;
@end

@interface XXUnknownSuperclass (SBAdditions)
- (BOOL)sb_containsEmoji;
- (BOOL)sb_containsNonLatinLikeCharacters;
@end

@interface XXUnknownSuperclass (SpringBoardSupport)
- (id)sb_description;
- (BOOL)sb_hasExplicitUserElectionState;
@end

@interface XXUnknownSuperclass (SBWidgetSectionComparisonSupport)
- (int)sb_compareWidget:(id)widget;
- (int)sb_compareWidgetConsideringIsNew:(id)aNew;
- (int)sb_compareWidgetConsideringShowsInNotificationCenter:(id)notificationCenter;
- (BOOL)sb_isNewWidget;
- (id)sb_localizedDisplayName;
@end

@interface XXUnknownSuperclass (SBStringDrawing)
- (void)drawWithMetrics:(id)metrics inContext:(CGContextRef)context;
- (id)stringMetricsForFirstLineWidth:(float)firstLineWidth;
@end

@interface XXUnknownSuperclass (SpringBoardAdditions)
- (void)_printLayer:(id)layer level:(int)level;
- (BOOL)hasActiveKeyboardOnScreen;
- (void)sb_removeAllSubviews;
- (void)sb_removeAnimationsForKeys:(id)keys update:(id)update;
- (id)sb_snapshotImage;
- (void)sbs_printLayerHierarchy;
@end

@interface XXUnknownSuperclass (SBStarkBannerItem)
- (BOOL)isStarkBannerItem;
@end

@interface XXUnknownSuperclass (UIGestureRecognizer_SpringBoard)
- (id)sb_briefDescription;
@end

@interface XXUnknownSuperclass (SBSnapshotExtensions)
- (id)sb_snapshotViewImmediatelyFramedForPortrait;
@end

@interface XXUnknownSuperclass (SpringBoard)
- (void)sbf_each:(id)each;
- (id)sbf_filter:(id)filter;
- (id)sbf_first:(unsigned)first;
- (id)sbf_firstObjectOfClass:(Class)aClass;
- (id)sbf_firstObjectOfClassNamed:(id)classNamed;
- (id)sbf_firstObjectPassingTest:(id)test;
- (id)sbf_foldWithInitialValue:(id)initialValue block:(id)block;
- (id)sbf_map:(id)map;
- (id)sbf_mapNoNulls:(id)nulls;
- (id)sbf_reverse;
@end

