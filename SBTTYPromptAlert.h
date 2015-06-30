/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBAlert.h"


__attribute__((visibility("hidden")))
@interface SBTTYPromptAlert : SBAlert {
	NSString *_number;
	int _uid;
}
+ (BOOL)dialNumberPromptingIfNecessary:(id)necessary addressBookUID:(int)uid urlAddition:(id)addition;
+ (void)displayForNumber:(id)number addressBookUID:(int)uid;
- (id)initWithNumber:(id)number addressBookUID:(int)uid;
- (int)addressBookUID;
- (id)alertDisplayViewWithSize:(CGSize)size;
- (void)dealloc;
- (id)number;
@end

