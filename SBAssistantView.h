/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@interface SBAssistantView : XXUnknownSuperclass <UISearchBarDelegate, UIScrollViewDelegate, SBAssistantMicButtonProtocol> {
	id<SBAssistantViewDelegate> _delegate;
	UIScrollView *_statusScrollView;
	UISearchBar *_searchBar;
	UIView *_statusBar;
	UILabel *_statusLabel;
	UITableView *_tableView;
	UIButton *_tryAgainButton;
	UIView *_contentView;
	UIImageView *_backgroundImageView;
	UIImageView *_magicPocketView;
	SBAssistantMicButtonView *_micButtonView;
	SBAssistantUnavailableView *_unavailableView;
	SBDeviceLockView *_deviceLockView;
	UIStatusBar *_fakeStatusBar;
	UIImageView *_statusShadowView;
	int _state;
	BOOL _animating;
	BOOL _initialQuery;
	BOOL _showingGuide;
	BOOL _ignoringTableInteraction;
	BOOL _scrolling;
	int _scrollCellIndex;
}
@property(assign, nonatomic) int assistantState;
@property(assign, nonatomic) id<SBAssistantViewDelegate> delegate;
@property(readonly, assign, nonatomic) SBDeviceLockView *deviceLockView;
@property(readonly, assign, nonatomic) UIControl *micButton;
@property(assign, nonatomic, getter=isModal) BOOL modal;
@property(readonly, assign, nonatomic) BOOL scrolling;
@property(assign, nonatomic, getter=isShowingGuide) BOOL showingGuide;
@property(readonly, assign, nonatomic) UITableView *tableView;
@property(readonly, assign, nonatomic) UIButton *tryAgainButton;
+ (float)bottomBarHeight;
+ (float)gridHeight;
- (id)initWithFrame:(CGRect)frame;
- (CGRect)_defaultTableFrame;
- (int)_lastCellToAffectMagicPocket;
- (void)_scrollToPendingCell;
- (void)_setSpeechEnabled:(BOOL)enabled;
- (void)_setupForInitialQuery:(BOOL)initialQuery animated:(BOOL)animated;
- (BOOL)_showAssistantStatusBar;
- (UIEdgeInsets)_standardInsets;
- (float)_tossAngleForCell:(id)cell;
- (void)_tossSnippetFromAboveMagicPocket:(id)aboveMagicPocket distanceToBottom:(float)bottom;
- (void)_tossSnippetFromBelowMagicPocket:(id)belowMagicPocket distanceToBottom:(float)bottom;
- (void)_updateAlphaForSnippets;
- (void)_updateMagicPocketAlpha;
- (void)appendContentInsetsToStandardInsets:(UIEdgeInsets)standardInsets;
- (float)assistantMicButtonGimmeAudioLevel:(id)level;
- (void)cancelScrollToCell;
- (void)dealloc;
- (void)endInput;
- (void)forceScrollToCell;
- (void)ignoreTableInteraction;
- (BOOL)isBeingQuiet;
- (BOOL)isDeviceLockKeypadShowing;
- (BOOL)isTableInteractionIgnored;
- (BOOL)magicPocketDisabled;
- (void)noteScrollAnimationDidEnd;
- (void)noteScrollViewDidScroll;
- (void)reloadConversation;
- (void)reset;
- (void)restoreTableInteractionIfNecessary;
- (void)scheduleScrollToCell:(int)cell;
- (void)scrollViewDidEndDecelerating:(id)scrollView;
- (void)searchBarSearchButtonClicked:(id)clicked;
- (void)setConnectionAvailable:(BOOL)available;
- (void)setMagicPocketDisabled:(BOOL)disabled;
- (void)setSearchText:(id)text;
- (void)setShowDeviceLockKeypad:(BOOL)keypad;
- (void)setTransactionComplete:(BOOL)complete;
- (void)showButton:(BOOL)button;
- (void)showFakeStatusBar:(BOOL)bar;
- (CGRect)statusBarFrame;
- (void)tossSnippet:(id)snippet;
@end
