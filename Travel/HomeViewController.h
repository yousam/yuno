//
//  HomeViewController.h
//  Travel
//
//  Created by 王颖 on 12-8-13.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PSCollectionView.h"
#import "PullPsCollectionView.h"
#import "ASIHTTPRequestDelegate.h"
#import "ASIFormDataRequest.h"

@interface HomeViewController : UIViewController<PSCollectionViewDelegate,PSCollectionViewDataSource,UIScrollViewDelegate,PullPsCollectionViewDelegate,ASIHTTPRequestDelegate>{
    CGPoint touchBeganPoint;
    BOOL homeViewIsOutOfStage;
    int _nCount ;
    UIPageControl*pageControl;
    UIScrollView *scroImg;
    UIView*headView;
    BOOL pageControlUsed;
     NSMutableArray *viewControllers;
    NSInteger pageIndex;
    NSInteger pageSize;
    NSMutableArray*items;
    
}
@property (nonatomic, retain) ASIFormDataRequest* Request;
@property (nonatomic, retain)  UIScrollView *scroImg;
@property(nonatomic,retain) PullPsCollectionView *collectionView;
-(void)loadDataSource;
- (IBAction)onNav:(id)sender;
@end


