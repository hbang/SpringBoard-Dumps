/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBBackgroundFetchTask : XXUnknownSuperclass {
	BOOL _finished;
	BKSProcessAssertion *_assertion;
	id _completionHandler;
	NSString *_bundleID;
	unsigned _trigger;
	int _sequenceNumber;
}
@property(retain, nonatomic) BKSProcessAssertion *assertion;
@property(readonly, assign, nonatomic) NSString *bundleID;
@property(copy, nonatomic) id completionHandler;
@property(readonly, assign) BOOL finished;
@property(readonly, assign) int sequenceNumber;
@property(readonly, assign) unsigned trigger;
- (id)initForApplication:(id)application trigger:(unsigned)trigger sequenceNumber:(int)number withCompletion:(id)completion;
- (void)_fireCompletionHandlerWithResult:(unsigned)result;
- (void)dealloc;
- (id)description;
- (void)finishWithResult:(unsigned)result;
@end

