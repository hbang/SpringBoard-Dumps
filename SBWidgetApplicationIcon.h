/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@interface SBWidgetApplicationIcon : SBApplicationIcon {
	UIWebClip *_webClip;
}
- (id)initWithApplication:(id)application;
- (BOOL)allowsUninstall;
- (void)completeUninstall;
- (void)dealloc;
- (id)folderFallbackTitle;
- (id)folderTitleOptions;
- (id)generateIconImage:(int)image;
- (BOOL)shouldEllipsizeLabel;
- (id)uninstallAlertBody;
- (id)uninstallAlertCancelTitle;
- (id)uninstallAlertConfirmTitle;
- (id)uninstallAlertTitle;
- (id)webClip;
@end
