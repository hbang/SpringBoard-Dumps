/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBAlertItemsSettings : XXUnknownSuperclass {
	BOOL _disableBBHandlers;
	int _testItemToken;
}
@property(assign, nonatomic) BOOL disableBBHandlers;
@property(assign, nonatomic) int testItemToken;
+ (id)newTestItemForToken:(int)token;
+ (id)settingsControllerModule;
- (void)setDefaultValues;
@end

