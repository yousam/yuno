
#import <UIKit/UIKit.h>

@interface PSCollectionViewCell : UIView

@property (nonatomic, retain) id object;

- (void)prepareForReuse;
- (void)fillViewWithObject:(id)object;
+ (CGFloat)heightForViewWithObject:(float)imgHeight fontHeight:(float)fontHeight inColumnWidth:(CGFloat)columnWidth;

@end
