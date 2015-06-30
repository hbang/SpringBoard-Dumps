/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SBFileLoggerDelegate.h"


__attribute__((visibility("hidden")))
@interface SBFileLogManager : XXUnknownSuperclass <SBFileLoggerDelegate> {
	NSMutableDictionary *_loggersByName;
}
+ (id)sharedInstance;
- (id)init;
- (void)_addLogger:(id)logger;
- (void)_enableOrDisableLoggerIfNecessary:(id)necessary;
- (void)_loadFileLoggers;
- (void)_recordForLogNamed:(id)logNamed format:(id)format arguments:(char *)arguments;
- (void)dealloc;
- (void)flush;
- (BOOL)isClass:(Class)aClass aKindOfClass:(Class)aClass2;
- (void)loggerEnabledStateChanged:(id)changed;
- (id)loggerForName:(id)name;
- (void)reloadFromDefaults;
@end

