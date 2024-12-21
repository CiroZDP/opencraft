#!/bin/bash

set -e

# Read inputs
CONTENT="${INPUT_CONTENT:-null}"
WEBHOOK_URL="${INPUT_URL}"
EMBEDS="${INPUT_EMBEDS}"

# Validate webhook URL
if [ -z "$WEBHOOK_URL" ]; then
  echo "Error: Webhook URL is not provided."
  exit 1
fi

# Construct payload
PAYLOAD=$(jq -n \
  --argjson content "${CONTENT:-null}" \
  --arg embeds "${EMBEDS}" \
  '{
    content: $content,
    embeds: ($embeds | fromjson)
  }')

# Send payload using curl
curl -X POST \
  -H "Content-Type: application/json" \
  -d "$PAYLOAD" \
  "$WEBHOOK_URL"
