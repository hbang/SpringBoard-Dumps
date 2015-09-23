/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@interface SBApplicationIcon : SBLeafIcon {
	SBApplication *_app;
}
- (id)initWithApplication:(id)application;
- (id)_automationID;
- (void)_setBadge:(id)badge;
- (id)application;
- (id)applicationBundleID;
- (void)dealloc;
- (id)displayName;
- (id)folderFallbackTitle;
- (id)folderTitleOptions;
- (id)generateIconImage:(int)image;
- (void)launch;
- (BOOL)launchEnabled;
- (id)leafIdentifier;
- (void)setBadge:(id)badge;
- (BOOL)shouldEllipsizeLabel;
- (id)tags;
@end

