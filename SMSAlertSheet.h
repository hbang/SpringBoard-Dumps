/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <UIKit/UIAlertView.h>


@interface SMSAlertSheet : UIAlertView {
	BOOL _showingTagline;
	BOOL _showingImage;
}
- (void)layout;
- (void)layoutAnimated:(BOOL)animated;
- (void)setImageData:(id)data;
- (BOOL)showingImage;
- (void)updateTagline;
@end
