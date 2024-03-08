//
//  SYIMMacro.h
//  Pods
//
//  Created by 张国梁 on 2024/2/4.
//

#ifndef SYIMMacro_h
#define SYIMMacro_h
#import "SYIMLogManager.h"

#define IsDictionaryNull(dict) (nil == dict || ![dict isKindOfClass:[NSDictionary class]] || [dict isKindOfClass:[NSNull class]] || [dict allKeys].count <= 0)
#define IsArrayNull(array) ((nil == array || ![array isKindOfClass:[NSArray class]] || [array isKindOfClass:[NSNull class]] || array.count <= 0))
#define IsStringNull(string) (nil == string || [string isKindOfClass:[NSNull class]]|| string.length <= 0)
#define IsObjectNull(object) (nil == object || [object isKindOfClass:[NSNull class]])
#define SYIMWeakSelf  __weak typeof(self) weakSelf = self;

#endif /* SYIMMacro_h */
