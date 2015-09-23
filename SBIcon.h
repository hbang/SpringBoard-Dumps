/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@interface SBIcon : XXUnknownSuperclass {
	id<SBIconDelegate> _delegate;
	SBIconImageContainerView *_iconImageContainer;
	SBIconImageView *_iconImageView;
	UIImageView *_iconDarkeningOverlay;
	UIImageView *_ghostlyImageView;
	UIImageView *_reflection;
	UIImageView *_shadow;
	SBIconBadge *_badge;
	id _badgeNumberOrString;
	SBIconLabel *_label;
	UIView *_closeBox;
	UIImageView *_dropGlow;
	unsigned _isShowingImages : 1;
	unsigned _drawsLabel : 1;
	unsigned _isHidden : 1;
	unsigned _isRevealable : 1;
	unsigned _inDock : 1;
	unsigned _inSwitcher : 1;
	unsigned _isGrabbed : 1;
	unsigned _isOverlapping : 1;
	unsigned _refusesRecipientStatus : 1;
	unsigned _highlighted : 1;
	unsigned _isJittering : 1;
	unsigned _allowJitter : 1;
	unsigned _touchDownInIcon : 1;
	NSTimer *_delayedUnhighlightTimer;
	unsigned _onWallpaper : 1;
	unsigned _ghostlyRequesters;
	unsigned _uninstalled : 1;
	float _iconImageAlpha;
	float _iconImageBrightness;
	float _iconLabelAlpha;
	float _accessoryAlpha;
	CGPoint _unjitterPoint;
	CGPoint _grabPoint;
	NSTimer *_longPressTimer;
	UIImage *_cachedIconImages[7];
}
@property(assign, nonatomic) id<SBIconDelegate> delegate;
+ (id)_jitterPositionAnimation;
+ (id)_jitterTransformAnimation;
+ (CGSize)defaultIconImageSize;
+ (CGSize)defaultIconSize;
+ (id)dequeueReusableIconImageView;
+ (void)enqueueReusableIconImageView:(id)view;
+ (id)genericAppIcon:(int)icon;
+ (id)homeScreenIconOverlayImage;
- (id)initWithDefaultSize;
- (id)_automationID;
- (void)_darkenIconImage:(float)image;
- (void)_delayedUnhighlight;
- (int)_delegateCloseBoxType;
- (BOOL)_delegatePositionIsEditable;
- (BOOL)_delegateTapAllowed;
- (void)_delegateTouchEnded:(BOOL)ended;
- (id)_newCloseBoxOfType:(int)type;
- (float)_reflectionImageOffset;
- (id)_shadowImageName;
- (void)_updateShadow;
- (void)_updateShadowFrame;
- (void)_updateShadowFrameForShadow:(id)shadow;
- (BOOL)allowJitter;
- (BOOL)allowsTapWhileEditing;
- (BOOL)allowsUninstall;
- (CGContextRef)alphaContext;
- (id)badgeNumberOrString;
- (int)badgeValue;
- (id)badgeView;
- (BOOL)canReceiveGrabbedIcon:(id)icon;
- (void)cancelLongPressTimer;
- (void)closeBoxTapped;
- (void)completeUninstall;
- (CGImageRef)createComposedIconImageUsingContext:(CGContextRef)context;
- (id)createShadowImageView;
- (void)darkenIconImage:(float)image;
- (id)darkenedIconImage:(id)image alpha:(float)alpha;
- (void)dealloc;
- (BOOL)delaysUnhighlightWhenTapped;
- (id)displayName;
- (id)dropGlow;
- (id)folderFallbackTitle;
- (id)folderTitleOptions;
- (CGRect)frameForIconOverlay;
- (id)generateIconImage:(int)image;
- (id)getIconImage:(int)image;
- (int)ghostlyRequesters;
- (double)grabDurationForEvent:(id)event;
- (CGContextRef)grayscaleContext;
- (BOOL)hasBadge;
- (void)hideCloseBoxAnimationDidStop:(id)hideCloseBoxAnimation didFinish:(id)finish closeBox:(id)box;
- (id)iconImageView;
- (id)imageForReflection;
- (BOOL)isGhostly;
- (BOOL)isGrabbed;
- (BOOL)isHidden;
- (BOOL)isHighlighted;
- (BOOL)isInDock;
- (BOOL)isRevealable;
- (BOOL)isShowingCloseBox;
- (BOOL)isShowingDropGlow;
- (BOOL)isShowingImages;
- (BOOL)isTouchDownInIcon;
- (BOOL)isUninstalled;
- (void)launch;
- (BOOL)launchEnabled;
- (void)localeChanged;
- (int)localizedCompareDisplayNames:(id)names;
- (void)longPressTimerFired;
- (BOOL)matchesEntity:(id)entity;
- (BOOL)matchesRepresentation:(id)representation;
- (void)placeGhostlyImageView;
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;
- (BOOL)pointMostlyInside:(CGPoint)inside withEvent:(id)event;
- (void)prepareDropGlow;
- (void)prepareGhostlyImage;
- (void)prepareIconImageViewForRecycling;
- (void)purgeCachedImages;
- (id)reflectedIcon:(BOOL)icon;
- (void)reloadIconImage;
- (void)removeAllIconAnimations;
- (void)removeDropGlow;
- (void)removeGhostlyImage;
- (id)representation;
- (void)setAllowJitter:(BOOL)jitter;
- (void)setBadge:(id)badge;
- (void)setDisplayedIconImage:(id)image;
- (void)setDisplaysInSwitcher:(BOOL)switcher;
- (void)setDisplaysOnWallpaper:(BOOL)wallpaper;
- (void)setDrawsLabel:(BOOL)label;
- (void)setFrame:(CGRect)frame;
- (void)setGhostly:(BOOL)ghostly requester:(int)requester;
- (void)setHighlighted:(BOOL)highlighted;
- (void)setHighlighted:(BOOL)highlighted delayUnhighlight:(BOOL)unhighlight;
- (void)setIconImageAlpha:(float)alpha;
- (void)setIconLabelAlpha:(float)alpha;
- (void)setIconPosition:(CGPoint)position;
- (void)setInDock:(BOOL)dock;
- (void)setIsGrabbed:(BOOL)grabbed;
- (void)setIsHidden:(BOOL)hidden animate:(BOOL)animate;
- (void)setIsJittering:(BOOL)jittering;
- (void)setIsOverlapping:(BOOL)overlapping;
- (void)setIsRevealable:(BOOL)revealable;
- (void)setLabelDisplaysOnWallpaper:(BOOL)wallpaper;
- (void)setPartialGhostly:(float)ghostly requester:(int)requester;
- (void)setRefusesRecipientStatus:(BOOL)status;
- (void)setShadowsHidden:(BOOL)hidden;
- (void)setShowsCloseBox:(BOOL)box;
- (void)setShowsImages:(BOOL)images;
- (void)setTouchDownInIcon:(BOOL)icon;
- (void)setUninstalled;
- (BOOL)shouldCacheImageForFormat:(int)format;
- (BOOL)shouldEllipsizeLabel;
- (void)showDropGlow:(BOOL)glow;
- (void)showIconAnimationDidStop:(id)showIconAnimation didFinish:(id)finish icon:(id)icon;
- (BOOL)showsReflection;
- (UIEdgeInsets)snapshotEdgeInsets;
- (id)tags;
- (void)touchesBegan:(id)began withEvent:(id)event;
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;
- (void)touchesEnded:(id)ended withEvent:(id)event;
- (void)touchesMoved:(id)moved withEvent:(id)event;
- (CGAffineTransform)transformToMakeDropGlowShrinkToIconSize;
- (id)uninstallAlertBody;
- (id)uninstallAlertCancelTitle;
- (id)uninstallAlertConfirmTitle;
- (id)uninstallAlertTitle;
- (void)updateLabel;
- (void)updateLabelKerningAndEllipsing;
- (void)updateLabelOrigin;
@end

@interface SBIcon (SBApplicationIcon)
- (id)application;
- (BOOL)isApplicationIcon;
@end

@interface SBIcon (SBBookmarkIcon)
- (BOOL)isBookmarkIcon;
@end

@interface SBIcon (SBRemovedFolderHole)
- (BOOL)isRemovedFolderHole;
@end

@interface SBIcon (SBDestinationHole)
- (BOOL)isDestinationHole;
@end

@interface SBIcon (SBNullIcon)
- (BOOL)isNullIcon;
@end

@interface SBIcon (SBDownloadingIcon)
- (id)download;
- (BOOL)isDownloadingIcon;
@end

@interface SBIcon (SBUserInstalledApplicationIcon)
- (BOOL)isUserInstalledApplicationIcon;
@end

@interface SBIcon (SBWidgetApplicationIcon)
- (BOOL)isWidgetApplicationIcon;
@end

@interface SBIcon (SBFolderIcon)
- (id)enclosingFolder;
- (id)folder;
- (BOOL)isFolderIcon;
@end

@interface SBIcon (SBLeafIcon)
- (id)applicationBundleID;
- (BOOL)isLeafIcon;
- (id)leafIdentifier;
- (id)webClip;
@end

@interface SBIcon (SBPrintStatusIcon)
- (BOOL)isPrintStatusIcon;
@end

