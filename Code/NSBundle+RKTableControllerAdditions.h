//
//  NSBundle+RKTableControllerAdditions.h
//  RestKit
//
//  Created by Blake Watters on 8/28/12.
//  Copyright (c) 2009-2012 RestKit. All rights reserved.
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//  http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//

#import <UIKit/UIImage.h>

/**
 Provides convenience methods for accessing data in resources
 within an NSBundle.
 */
@interface NSBundle (RKTableControllerAdditions)

/**
 Returns an NSBundle reference to the RestKitResources.bundle file containing
 RestKit specific resource assets.

 This method is a convenience wrapper for invoking
 `[NSBundle bundleWithIdentifier:@"org.restkit.RestKitResources"]`

 @return An NSBundle object corresponding to the RestKitResources.bundle file.
 */
+ (NSBundle *)restKitResourcesBundle;

/**
 Creates and returns an image object by loading the image data from the resource identified by the specified name and file extension.

 @param name The name of the resource file.
 @param extension If extension is an empty string or nil, the extension is assumed not to exist and the file is the first file encountered that exactly matches name.
 @return A new image object for the specified file, or nil if the method could not initialize the image from the specified file.
 */
- (UIImage *)imageWithContentsOfResource:(NSString *)name withExtension:(NSString *)extension;

@end
