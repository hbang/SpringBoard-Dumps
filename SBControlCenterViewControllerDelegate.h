/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@protocol SBControlCenterViewControllerDelegate <NSObject>
- (void)controlCenterViewController:(id)controller backdropViewDidUpdate:(id)backdropView;
- (BOOL)controlCenterViewController:(id)controller canHandleGestureRecognizer:(id)recognizer;
- (void)controlCenterViewController:(id)controller handlePan:(id)pan;
- (void)controlCenterViewController:(id)controller handleTap:(id)tap;
- (void)controlCenterViewControllerWantsDismissal:(id)dismissal;
@end

