/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "_UISettingsKeyObserver.h"
#import "SBBulletinAlertHandlerRegistry.h"


@protocol SBBulletinAlertHandlerRegistry
- (void)addAlertHandler:(id)handler forSection:(id)section;
@end

__attribute__((visibility("hidden")))
@interface SBBulletinAlertHandlerRegistry : XXUnknownSuperclass <_UISettingsKeyObserver, SBBulletinAlertHandlerRegistry> {
	NSMutableDictionary *_handlersBySectionID;
	SBAlertItemsSettings *_settings;
	BOOL _disabled;
}
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, assign) unsigned hash;
@property(readonly, assign) Class superclass;
- (id)init;
- (void)addAlertHandler:(id)handler forSection:(id)section;
- (id)alertHandlersForSection:(id)section;
- (void)dealloc;
- (void)settings:(id)settings changedValueForKey:(id)key;
@end

