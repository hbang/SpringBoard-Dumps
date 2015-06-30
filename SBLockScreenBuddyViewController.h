/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBLockOverlayViewController.h"
#import "SBLockScreenBuddyViewDelegate.h"
#import "SpringBoard-Structs.h"


__attribute__((visibility("hidden")))
@interface SBLockScreenBuddyViewController : SBLockOverlayViewController <SBLockScreenBuddyViewDelegate> {
	NSMutableArray *_currentStringsOrdering;
	BOOL _needsTransitionFromFakeLogoToWelcomeStrings;
	BOOL _cyclingLabels;
	BOOL _viewVisible;
	BOOL _showingBootLogo;
	BOOL _startsWithBlackBackground;
	BOOL _hasResultsFromWifiScan;
	BOOL _shouldResetOrderingOnNextCycle;
	SBLockScreenViewController *_lockScreenViewController;
	NSDictionary *_localizedStrings;
	NSArray *_stringsOrdering;
	unsigned _currentStringIndex;
	NSTimer *_stringCycleTimer;
	SBActivationInfoViewController *_activationInfoViewController;
	NSString *_telephonyPrimaryLanguage;
	NSString *_wifiPrimaryLanguage;
}
@property(retain, nonatomic) SBActivationInfoViewController *activationInfoViewController;
@property(assign, nonatomic) unsigned currentStringIndex;
@property(assign, nonatomic) BOOL hasResultsFromWifiScan;
@property(copy, nonatomic) NSDictionary *localizedStrings;
@property(assign, nonatomic) SBLockScreenViewController *lockScreenViewController;
@property(assign, nonatomic) BOOL shouldResetOrderingOnNextCycle;
@property(assign, nonatomic, getter=isShowingBootLogo) BOOL showingBootLogo;
@property(readonly, assign, nonatomic) NSString *slideToUnlockText;
@property(assign, nonatomic) BOOL startsWithBlackBackground;
@property(retain, nonatomic) NSTimer *stringCycleTimer;
@property(copy, nonatomic) NSArray *stringsOrdering;
@property(copy, nonatomic) NSString *telephonyPrimaryLanguage;
@property(copy, nonatomic) NSString *wifiPrimaryLanguage;
- (id)initWithLockScreenViewController:(id)lockScreenViewController;
- (void)_backlightDidDim:(id)_backlight;
- (void)_backlightDidTurnOn:(id)_backlight;
- (void)_closeWifiConnection;
- (id)_currentLanguageIdentifier;
- (id)_currentStringsDictionary;
- (void)_cycleTimerDidFire:(id)_cycleTimer;
- (void)_didHideBootSetupLogo:(id)logo;
- (void)_didShowBootSetupLogo:(id)logo;
- (void)_fetchLanguageFromTelephony;
- (id)_importantLanguageIdentifiers;
- (void)_noteLogoVisible:(BOOL)visible;
- (void)_removeAllHiddenReasons;
- (void)_resetDisplayedLocalizedStringsImmediately:(BOOL)immediately;
- (void)_startCyclingLocalizedStrings;
- (void)_startCyclingLocalizedStringsWithDelay:(double)delay;
- (void)_startWifiScan;
- (void)_stopCyclingLocalizedStrings;
- (void)_toggleShowsIMEIandICCID:(id)iccid;
- (void)_transitionFromFakeBootLogoToWelcomeStrings;
- (void)_updateDisplayedStrings;
- (void)_updateWifiPrimaryLanguageFromGuessedCountries:(id)guessedCountries;
- (void)_wifiScanComplete:(CFArrayRef)complete error:(BOOL)error;
- (id)buddyView;
- (void)buddyView:(id)view didChangeToStyle:(unsigned)style;
- (void)dealloc;
- (void)handleTapGestureFromView:(id)view;
- (void)loadView;
- (void)viewDidAppear:(BOOL)view;
- (void)viewDidDisappear:(BOOL)view;
- (void)viewWillAppear:(BOOL)view;
- (void)viewWillDisappear:(BOOL)view;
@end

