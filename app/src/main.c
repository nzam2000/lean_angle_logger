#include <stdio.h>
#include <zephyr/kernel.h>

K_MUTEX_DEFINE(m);

void thread_entry(void* p1, void* p2, void* p3)
{
    while (1)
    {
        k_mutex_lock(&m, K_FOREVER);
        printf("thread %d\n", (int)p1);
        k_msleep(1000);
        k_mutex_unlock(&m);
        k_yield();
    }
}

K_THREAD_DEFINE(
    thread_0,
    1024,
    thread_entry,
    0, NULL, NULL,
    7,
    0,
    0
    );

K_THREAD_DEFINE(
    thread_1,
    1024,
    thread_entry,
    1, NULL, NULL,
    7,
    0,
    0
    );