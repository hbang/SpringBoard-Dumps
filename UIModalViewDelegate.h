/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@protocol UIModalViewDelegate <NSObject>
@optional
- (void)didPresentModalView:(id)view;
- (void)modalView:(id)view clickedButtonAtIndex:(int)index;
- (void)modalView:(id)view didDismissWithButtonIndex:(int)buttonIndex;
- (void)modalView:(id)view willDismissWithButtonIndex:(int)buttonIndex;
- (void)modalViewCancel:(id)cancel;
- (void)willPresentModalView:(id)view;
@end

