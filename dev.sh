#!/bin/bash
self_dir=`dirname "$(readlink -f $0)"`
docker run -it --rm --user $UID -v $self_dir:/src -w /src dromie/cleanflight-dev "$@"
