/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>
#import "SBTVOutController.h"


@interface SBTVOutController : NSObject {
	int _tvOutMode;
}
@property(readonly, assign, nonatomic) BOOL isTVSignalTypeDigital;
@property(assign, nonatomic) int tvOutMode;
+ (id)sharedInstance;
- (id)init;
- (void)dealloc;
- (void)setIntialTVModeIfNeeded;
- (BOOL)updateLayerKitSettings;
- (void)updateSettings;
@end

@interface SBTVOutController (private)
- (void)_handleIapServerConnectionDied;
- (void)_tetherSettingChanged:(id)changed;
- (void)startListeningForSettingsChanges;
- (void)stopListeningForSettingsChanges;
@end
