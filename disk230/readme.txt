DOS1 kernel
st v1 vs st v2	driver different
st v2 vs st v3	driver different
st v3 vs gt	identical

DOS2 kernel, segment 0
st v1 vs st v2	v2 has version string (0912), 4B07 patch, 5254 patch, driver different
st v2 vs st v3	v3 has version string (1205), driver different
st v3 vs gt	gt has version string (0618), version 2.31, different from 4ADE, driver different

DOS2 kernel, segment 1
st v1 vs st v2	v2 different from 4403
st v2 vs st v3	v3 different from 76DE
st v3 vs gt	identical

DOS2 kernel, segment 2
st v1 vs st v2	v2 different from 6431
st v2 vs st v3	v3 different from 7F4B
st v3 vs gt	gt different from 58D6
