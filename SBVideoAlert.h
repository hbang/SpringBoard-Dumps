/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@interface SBVideoAlert : SBAlert {
	CNFConferenceController *_conferenceController;
	NSURL *_inviter;
	CNFDisplayController *_displayController;
	NSString *_conferenceID;
}
- (id)initWithConferenceController:(id)conferenceController inviter:(id)inviter conferenceID:(id)anId;
- (BOOL)_tearDownFencedWindowWithObserver;
- (id)alertDisplayViewWithSize:(CGSize)size;
- (id)conferenceController;
- (id)conferenceID;
- (void)dealloc;
- (id)displayController;
- (id)inviter;
- (void)inviterCanceledConference;
@end

