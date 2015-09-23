/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@interface SBAwayInCallController : XXUnknownSuperclass {
	TPLCDView *_lcdView;
	BOOL _showsInCallInfo;
	NSTimer *_durationTimer;
	CTCallRef _displayedCall;
	NSString *_localizedLabel;
	UIImage *_callerImage;
	BOOL _isFullScreen;
}
- (id)initWithLCDView:(id)lcdview;
- (id)callerImage;
- (BOOL)callerImageIsFullScreen;
- (void)dealloc;
- (void)fetchCallInformation:(id *)information name:(id *)name label:(id *)label image:(id *)image isFullScreen:(BOOL *)screen wantsHighResolution:(BOOL)resolution;
- (void)reload;
- (void)setShowsInCallInfo:(BOOL)callInfo;
- (void)updateDuration;
@end

