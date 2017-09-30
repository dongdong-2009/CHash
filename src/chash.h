/*
 * chash.h
 *
 *  Created on: 2017年9月29日
 *      Author: 36295
 */

#ifndef CHASH_H_
#define CHASH_H_

#include "clist.h"
#include <stdint.h>

#define CHASH_KEY_LEN	(10)
#define CHASH_VALUE_LEN	(20)

/**
 * 描述hash链表
 */
struct hash_list {
	size_t arr_len;
	size_t (*alog)(struct hash_list* list, const char* key);
	void (*insert)(struct hash_list* list, const char* key, const char* value);
	char* (*search)(struct hash_list* list, const char* key);
	void (*del)(struct hash_list* list, const char* key);
	void (*print)(struct hash_list* list);
	struct hlist_head parr[0];
};

#ifdef __cplusplus
extern "C" {
#endif

struct hash_list* newHashList(size_t len);
void freeHashList(struct hash_list* list);

#ifdef __cplusplus
}
#endif
#endif /* CHASH_H_ */
