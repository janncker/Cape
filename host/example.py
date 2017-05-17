#!/usr/bin/env python
import Cape
import struct

key="secret123"
src="hello world"

c = Cape.Cape(key, len(key))

c.encrypt(src, len(src))

en= c.get_result()

print len(en)
print struct.unpack("%dB" %(len(en)), en)

c.decrypt(en, len(en))

print c.get_result()
