/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface SBAwayListActionContext : XXUnknownSuperclass {
	NSString *_lockLabel;
	NSString *_shortLockLabel;
	id _unlockAction;
	NSString *_bulletinID;
	float _fontsize;
	BOOL _requiresUnlock;
	BOOL _launchActionCanBypassPinLock;
	BOOL _hasCustomUnlockLabel;
	BOOL _canBypassPinLock;
}
@property(assign, nonatomic) BOOL canBypassPinLock;
@property(assign, nonatomic) BOOL hasCustomUnlockLabel;
@property(assign, nonatomic) BOOL requiresUnlock;
+ (id)actionContextForAlertItem:(id)alertItem;
+ (id)actionContextForBulletin:(id)bulletin pluginActionsAllowed:(BOOL)allowed;
+ (id)actionContextForCardItem:(id)cardItem;
- (id)_initWithLockLabel:(id)lockLabel shortLockLabel:(id)label unlockAction:(id)action bulletinID:(id)anId;
- (id)_initWithLockLabel:(id)lockLabel shortLockLabel:(id)label unlockAction:(id)action bulletinID:(id)anId fontSize:(float)size;
- (id)bulletinID;
- (void)dealloc;
- (id)lockLabel;
- (float)lockLabelFontSize;
- (id)shortLockLabel;
- (id)unlockAction;
@end
