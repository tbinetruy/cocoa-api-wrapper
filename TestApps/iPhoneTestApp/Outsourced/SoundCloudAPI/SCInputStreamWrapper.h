/*
 * Copyright 2009 Ullrich Schäfer, Gernot Poetsch for SoundCloud Ltd.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License"); you may not
 * use this file except in compliance with the License. You may obtain a copy of
 * the License at
 * 
 * http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
 * License for the specific language governing permissions and limitations under
 * the License.
 *
 * For more information and documentation refer to
 * http://soundcloud.com/api
 * 
 */

#import <Foundation/Foundation.h>


@interface SCInputStreamWrapper : NSObject {
	NSInputStream *stream;
	unsigned long long contentLength;
	NSString *fileName;
}
@property (nonatomic, retain, readonly) NSInputStream *stream;
@property (nonatomic, assign, readonly) unsigned long long contentLength;
@property (nonatomic, copy, readonly) NSString *fileName;

+ (id)wrapperWithStream:(NSInputStream *)stream contentLength:(unsigned long long)contentLength DEPRECATED_ATTRIBUTE;
- (id)initWithStream:(NSInputStream *)stream contentLength:(unsigned long long)contentLength DEPRECATED_ATTRIBUTE;

+ (id)wrapperWithStream:(NSInputStream *)stream contentLength:(unsigned long long)contentLength fileName:(NSString *)fileName;
- (id)initWithStream:(NSInputStream *)stream contentLength:(unsigned long long)contentLength fileName:(NSString *)fileName;


@end