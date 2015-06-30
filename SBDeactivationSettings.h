/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBDeactivationSettings.h"
#import "SpringBoard-Structs.h"
#import "NSObject.h"
#import "NSCopying.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "BSSettingDescriptionProvider.h"


@protocol SBDeactivationSettings <NSObject>
- (void)applyDeactivationSettings:(id)settings;
- (BOOL)boolForDeactivationSetting:(unsigned)deactivationSetting;
- (int)flagForDeactivationSetting:(unsigned)deactivationSetting;
- (id)objectForDeactivationSetting:(unsigned)deactivationSetting;
- (void)setFlag:(int)flag forDeactivationSetting:(unsigned)deactivationSetting;
- (void)setObject:(id)object forDeactivationSetting:(unsigned)deactivationSetting;
@end

__attribute__((visibility("hidden")))
@interface SBDeactivationSettings : XXUnknownSuperclass <BSSettingDescriptionProvider, SBDeactivationSettings, NSCopying> {
	BSMutableSettings *_settings;
}
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, assign) unsigned hash;
@property(readonly, assign) Class superclass;
- (id)init;
- (void)applyDeactivationSettings:(id)settings;
- (id)basicDescriptionWithPrefix:(id)prefix;
- (BOOL)boolForDeactivationSetting:(unsigned)deactivationSetting;
- (id)copyWithZone:(NSZone *)zone;
- (void)dealloc;
- (int)flagForDeactivationSetting:(unsigned)deactivationSetting;
- (id)keyDescriptionForSetting:(unsigned)setting;
- (id)objectForDeactivationSetting:(unsigned)deactivationSetting;
- (void)setFlag:(int)flag forDeactivationSetting:(unsigned)deactivationSetting;
- (void)setObject:(id)object forDeactivationSetting:(unsigned)deactivationSetting;
- (id)valueDescriptionForFlag:(int)flag object:(id)object ofSetting:(unsigned)setting;
@end

