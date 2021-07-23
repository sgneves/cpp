for ($i = 0; $i -lt $args.count; $i++)
{
	cd $args[$i]
	vscp
	cd..
}
