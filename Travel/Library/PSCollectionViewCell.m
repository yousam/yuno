

#import "PSCollectionViewCell.h"
#define MARGIN 4.0
@interface PSCollectionViewCell ()

@end

@implementation PSCollectionViewCell

@synthesize
object = _object;

- (id)initWithFrame:(CGRect)frame {
    self = [super initWithFrame:frame];
    if (self) {
    }
    return self;
}

- (void)dealloc {
    self.object = nil;
    [super dealloc];
}

- (void)prepareForReuse {
}

- (void)fillViewWithObject:(id)object {
    self.object = object;
}

+ (CGFloat)heightForViewWithObject:(float)imgHeight fontHeight:(float)fontHeight inColumnWidth:(CGFloat)columnWidth {
    CGFloat height = 0.0;
    CGFloat width = columnWidth - MARGIN * 2;
    
    height += MARGIN;
    
    // Image
    CGFloat objectWidth =100;
    CGFloat objectHeight = imgHeight;
    CGFloat scaledHeight = floorf(objectHeight / (objectWidth / width));
    height += scaledHeight;
    
    // Label
    
    height += fontHeight;
    height += MARGIN;
    return height;
}

@end
