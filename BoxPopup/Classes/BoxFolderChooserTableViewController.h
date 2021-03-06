
//   Copyright 2011 Box.net, Inc.
//
//   Licensed under the Apache License, Version 2.0 (the "License");
//   you may not use this file except in compliance with the License.
//   You may obtain a copy of the License at
//
//       http://www.apache.org/licenses/LICENSE-2.0
//
//   Unless required by applicable law or agreed to in writing, software
//   distributed under the License is distributed on an "AS IS" BASIS,
//   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//   See the License for the specific language governing permissions and
//   limitations under the License.
//

/*
 * This interface handles the folder selection table. The user navigates to the folder selection page to specify a folder to 
 * upload to.
 */

#import <UIKit/UIKit.h>
#import "BoxUser.h"
#import "BoxFolder.h"
#import "BoxObject.h"
#import "BoxFolderXMLBuilder.h"
#import "BoxCommonUISetup.h"
#import "BoxFolder+SaveableFolder.h"

@protocol BoxFolderRetrievalCallback;

@interface BoxFolderChooserTableViewController : UITableViewController {
	UIActivityIndicatorView * _activityIndicator;
	BoxFolder * _folderModel;
	
	id<BoxFolderRetrievalCallback> _filePathSelectorDelegate;
}

@property (nonatomic,retain) id<BoxFolderRetrievalCallback> filePathSelectorDelegate;

@end

@protocol BoxFolderRetrievalCallback

-(void)setUploadFolderModel:(BoxFolder*)folderModel;

@end
