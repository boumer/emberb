VALUE rescue_func(VALUE obj1)
{
	/* handle exception */
	return obj2;
}

void some_function()
{
	/* ... */

	VALUE result;

	/* rescue TypeError and RangeError */
	result = rb_rescue2(dangerous_func, dangerous_arg, rescue_func, rescue_arg, rb_eTypeError, rb_eRangeError, 0);

	/* ... */
}
