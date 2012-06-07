//
//  PhotoSource.h
//  PhotoAlbum
//
//  Created by Gia Thuy Luu on 7/6/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "FGalleryViewController.h"

@interface PhotoSource : NSObject <FGalleryViewControllerDelegate> {
    NSArray *networkCaptions;
    NSArray *networkImages;
}
@end
