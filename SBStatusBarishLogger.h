/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBFileLogger.h"


__attribute__((visibility("hidden")))
@interface SBStatusBarishLogger : SBFileLogger {
	BOOL _useCustomDestinations;
	unsigned _customDestinations;
}
- (void)_setEnabled:(BOOL)enabled;
- (BOOL)isEnabled;
- (unsigned)logDestinations;
- (id)logPreferenceName;
- (id)logPrefixForCategory:(id)category destination:(unsigned)destination;
- (id)name;
- (void)reloadFromDefaults;
- (BOOL)shouldEnableOnInternalBuilds;
@end

