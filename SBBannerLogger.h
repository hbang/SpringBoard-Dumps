/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBFileLogger.h"


__attribute__((visibility("hidden")))
@interface SBBannerLogger : SBFileLogger {
}
- (void)_setEnabled:(BOOL)enabled;
- (void)_setLevel:(int)level;
- (int)level;
- (id)logPreferenceName;
- (id)logPrefixForCategory:(id)category destination:(unsigned)destination;
- (id)name;
@end

