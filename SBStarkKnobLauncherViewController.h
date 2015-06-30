/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBStarkKnobLauncherViewController : SBStarkLauncherViewController <UITableViewDataSource, UITableViewDelegate, UIGestureRecognizerDelegate, SBStarkKnobLauncherCellDelegate> {
	UITableView *_tableView;
	UINavigationBar *_navBar;
	SBIcon *_lastHighlightedIcon;
}
- (void)_launchIcon:(id)icon;
- (id)_rowIndexPathForIcon:(id)icon;
- (void)dealloc;
- (BOOL)hidesAutomatically;
- (BOOL)iconShowsDisclosureIndicator:(id)indicator;
- (void)loadView;
- (BOOL)obscuresControlBar;
- (id)prefixFakeIcons;
- (void)relayoutIcons;
- (BOOL)starkKnobLauncherCellDisplaysBadges:(id)badges;
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
- (int)tableView:(id)view numberOfRowsInSection:(int)section;
- (void)viewDidAppear:(BOOL)view;
- (void)viewWillAppear:(BOOL)view;
- (void)viewWillLayoutSubviews;
@end

