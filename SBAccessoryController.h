/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@interface SBAccessoryController : NSObject {
	NSDictionary *_lingoToApplicationMap;
	NSMutableDictionary *_availableAccessories;
}
+ (id)sharedAccessoryController;
- (id)init;
- (void)_disableAccessoryIfNeeded:(id)needed forLingo:(int)lingo;
- (void)_enableAccessoryIfNeeded:(id)needed forLingo:(int)lingo;
- (void)accessoryAvailabilityChanged:(int)changed availability:(int)availability;
- (void)dealloc;
- (void)reloadLingoToApplicationMap;
@end
