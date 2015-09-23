/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BSDescriptionProviding.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface SBSystemGestureManager : XXUnknownSuperclass <BSDescriptionProviding> {
	FBSDisplay *_display;
	NSMutableDictionary *_typeToGesture;
	NSMutableDictionary *_typeToState;
	NSMutableSet *_recognizingGestures;
	BOOL _systemGesturesDisabledForAccessibility;
}
@property(readonly, assign, nonatomic, getter=isAnyGestureRunning) BOOL anyGestureRunning;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, retain, nonatomic) FBSDisplay *display;
@property(readonly, assign) unsigned hash;
@property(readonly, assign) Class superclass;
@property(assign, nonatomic, getter=areSystemGesturesDisabledForAccessibility) BOOL systemGesturesDisabledForAccessibility;
+ (id)mainDisplayManager;
- (id)init;
- (id)initWithDisplay:(id)display;
- (void)_disableSystemGesture:(id)gesture withType:(unsigned)type;
- (void)_enableSystemGesture:(id)gesture withType:(unsigned)type;
- (BOOL)_isGestureWithTypeAllowed:(unsigned)typeAllowed;
- (BOOL)_shouldEnableSystemGestureWithType:(unsigned)type;
- (void)_systemGestureChanged:(id)changed;
- (void)_updateUserPreferences;
- (void)addGestureRecognizer:(id)recognizer withType:(unsigned)type;
- (void)dealloc;
- (id)descriptionBuilderWithMultilinePrefix:(id)multilinePrefix;
- (id)descriptionWithMultilinePrefix:(id)multilinePrefix;
- (BOOL)isGestureWithTypeAllowed:(unsigned)typeAllowed;
- (void)removeGestureRecognizer:(id)recognizer;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (void)updateUserPreferences;
@end

